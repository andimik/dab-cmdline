#ifndef __MP4PROCESSOR__
#define __MP4PROCESSOR__
/*
 * 	Handling superframes for DAB+ and delivering
 * 	frames into the ffmpeg or faad decoding library
 */
//
#include <stdint.h>
#include <stdio.h>
#include <vector>
#include "backend-base.h"
#include "dab-api.h"
#include "dab-constants.h"
#include "faad-decoder.h"
#include "firecode-checker.h"
#include "pad-handler.h"
#include "reed-solomon.h"

class mp4Processor : public backendBase {
 public:
  mp4Processor(int16_t, audioOut_t, dataOut_t, programQuality_t, motdata_t,
               void *);
  ~mp4Processor(void);
  virtual void setError_handler(decodeErrorReport_t err_Handler);
  void addtoFrame(uint8_t *);
  
  // NEW: Add getter for stream parameters
  bool getLastStreamParameters(stream_parms &params) {
      if (hasStreamParameters) {
          params = lastStreamParameters;
          return true;
      }
      return false;
  }

 private:
  bool processSuperframe(uint8_t[], int16_t);
  audioOut_t soundOut;
  dataOut_t dataOut;
  programQuality_t mscQuality;
  decodeErrorReport_t errorReportHandler;
  void *ctx;
  padHandler my_padHandler;
  void buildHeader(int16_t framelen, stream_parms *sp, uint8_t *header);
  int16_t superFramesize;
  int16_t blockFillIndex;
  int16_t blocksInBuffer;
  int16_t blockCount;
  int16_t bitRate;
  std::vector<uint8_t> frameBytes;
  std::vector<uint8_t> outVector;
  int16_t RSDims;
  int16_t au_start[10];
  int32_t baudRate;

  firecode_checker fc;
  reedSolomon my_rsDecoder;
  faadDecoder aacDecoder;

  int32_t totalFrameCount;
  int16_t frameCount;
  int16_t successFrames;
  int16_t frameErrors;
  int16_t rsErrors;
  int16_t aacErrors;
  int16_t aacFrames;

  int16_t frame_quality;
  int16_t rs_quality;
  int16_t aac_quality;

  int16_t charSet;
  void show_frameErrors(int);
  void show_rsErrors(int);
  void show_aacErrors(int);
  void isStereo(bool);
  
  // NEW: Add member variables for stream parameters
  stream_parms lastStreamParameters;
  bool hasStreamParameters;
};

#endif
