# DAB-cmdline for use with FMLIST Scanner 

This is a fork of https://github.com/JvanKatwijk/dab-cmdline/ especially for use with https://github.com/hayguen/fmlist_scan 

Compared to the initial project, it only contains basic inputs (rtlsdr, rawfiles, wavefile) as the FMLIST scan is based on RTLSDR sticks only.

## Example-10

```
dab-rtlsdr -E -Q -C 7D
```
will print a summary after some seconds.

```
programnameHandler: 'EPG-SPI         ' / 'EPG-SPI' (SId E0500004) is part of the ensemble
FIG0Ext5: Short, SubChId 15, language 21
FIG0Ext5: Short, SubChId 9, language 21
FIG0Ext5: Short, SubChId 6, language 21
FIG0Ext5: Short, SubChId 2, language 21
FIG0Ext5: Short, SubChId 17, language 21
programnameHandler: 'Radio TV Serie A' / 'Serie A' (SId 5228) is part of the ensemble
programnameHandler: 'EPG-SPI         ' / 'EPG-SPI' (SId E0500004) is part of the ensemble
programnameHandler: 'M DUE O DANCE   ' / 'DANCE' (SId 5287) is part of the ensemble
programnameHandler: 'ACI Radio       ' / 'ACIRadio' (SId 5227) is part of the ensemble
programnameHandler: 'Radio Maria     ' / 'R Maria' (SId 51CC) is part of the ensemble
programnameHandler: 'M DUE O         ' / 'M DUE O' (SId 5233) is part of the ensemble
programnameHandler: 'Deejay 30 Songs ' / '30 Songs' (SId 5283) is part of the ensemble

 1214: ensemblenameHandler: 'DAB Italia      ' / 'DAB Ita' ensemble (EId 5009) is recognized

programnameHandler: 'Radio 24 +1     ' / 'R24 +1' (SId 5282) is part of the ensemble
programnameHandler: 'Radio 24        ' / 'Radio 24' (SId 5245) is part of the ensemble
programnameHandler: 'RMALB.IA        ' / 'RMALB.IA' (SId 52CC) is part of the ensemble
programnameHandler: '105 DAB         ' / '105 DAB' (SId 5286) is part of the ensemble
programnameHandler: 'Radio Radicale  ' / 'Radicale' (SId 5210) is part of the ensemble
programnameHandler: 'RR News         ' / 'RR News' (SId 5284) is part of the ensemble
programnameHandler: '* RDS *         ' / '* RDS *' (SId 5264) is part of the ensemble
programnameHandler: 'R101            ' / 'R101' (SId 5215) is part of the ensemble
programnameHandler: 'Deejay          ' / 'Deejay' (SId 5214) is part of the ensemble
programnameHandler: '* RDS * Relax   ' / 'Relax' (SId 5281) is part of the ensemble
FIG0Ext5: Short, SubChId 15, language 21
FIG0Ext5: Short, SubChId 9, language 21
```

Also detailled information, which will later be used on FMLIST (section URDS).

```
0872: checked program 'Radio Vaticana  ' with SId 410E
	audioData:
		subchId		= 9
		startAddr	= 336
		shortForm	= false
		protLevel	= 2: 'EEP 3-A'
		codeRate	= 2: '1/2'
		length		= 36
		bitRate		= 48
		ASCTy		= 63: 'DAB+'
		country	ECC E0, Id 4: 'Israel'
		language	= -1: 'unknown (Lang.)'
		programType	= 20: 'Religion'
LIST: SID 0000410E of type A has 1 audio and 0 packet components: 'Radio Vaticana  ' / 'Vaticana'
```

and a summary in csv format for the automatic upload of the FMLIST Scanner.

```
all meta info of fib_processor:
services:
 0( 1): SID 00005215, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[4,], label 1 'R101            ' / 'R101'
 1( 2): SID 00005227, lang -1, PTy  3, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[10,], label 1 'ACI Radio       ' / 'ACIRadio'
 2( 3): SID 00005282, lang -1, PTy  1, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[17,], label 1 'Radio 24 +1     ' / 'R24 +1'
 3( 4): SID 000051CC, lang -1, PTy  7, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[1,], label 1 'Radio Maria     ' / 'R Maria'
 4( 5): SID 00005214, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[3,], label 1 'Deejay          ' / 'Deejay'
 5( 6): SID E0500004, lang -1, PTy -1, pNum -1, #SCIds 1 =[0,], #SCId 1 =[1600,], #SubChId 1 =[25,], label 1 'EPG-SPI         ' / 'EPG-SPI'
 6( 7): SID 000052CC, lang -1, PTy  7, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[13,], label 1 'RMALB.IA        ' / 'RMALB.IA'
 7( 8): SID 00005281, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[14,], label 1 '* RDS * Relax   ' / 'Relax'
 8( 9): SID 00005245, lang -1, PTy  1, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[7,], label 1 'Radio 24        ' / 'Radio 24'
 9(10): SID 00005228, lang -1, PTy  4, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[12,], label 1 'Radio TV Serie A' / 'Serie A'
10(11): SID 00005286, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[11,], label 1 '105 DAB         ' / '105 DAB'
11(12): SID 00005283, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[18,], label 1 'Deejay 30 Songs ' / '30 Songs'
12(13): SID 00005284, lang -1, PTy  1, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[19,], label 1 'RR News         ' / 'RR News'
13(14): SID 00005285, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[15,], label 1 'Capital Funky   ' / 'CapitalF'
14(15): SID 00005219, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[5,], label 1 'Capital         ' / 'Capital'
15(16): SID 00005233, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[6,], label 1 'M DUE O         ' / 'M DUE O'
16(17): SID 00005287, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[16,], label 1 'M DUE O DANCE   ' / 'DANCE'
17(18): SID 00005264, lang -1, PTy 10, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[8,], label 1 '* RDS *         ' / '* RDS *'
18(19): SID 0000410E, lang -1, PTy 20, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[9,], label 1 'Radio Vaticana  ' / 'Vaticana'
19(20): SID 00005210, lang -1, PTy  1, pNum -1, #SCIds 1 =[0,], #SCId 0 =[], #SubChId 1 =[2,], label 1 'Radio Radicale  ' / 'Radicale'
components:
 0( 1): P( 1) TMid 3, SID E0500004, componentNr  0, ASCTy -1, PS 1, subChID   25, SCId 1600, CA 0, appType  7, SCIds 0, madePub 1, '' / '', DSCTy 60, DG 0, addr   1
 1( 2): A( 1) TMid 0, SID 00005228, componentNr  0, ASCTy 63, PS 1, subChID   12, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 2( 3): A( 2) TMid 0, SID 00005287, componentNr  0, ASCTy 63, PS 1, subChID   16, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 3( 4): A( 3) TMid 0, SID 00005227, componentNr  0, ASCTy 63, PS 1, subChID   10, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 4( 5): A( 4) TMid 0, SID 000051CC, componentNr  0, ASCTy 63, PS 1, subChID    1, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 5( 6): A( 5) TMid 0, SID 00005233, componentNr  0, ASCTy 63, PS 1, subChID    6, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 6( 7): A( 6) TMid 0, SID 00005283, componentNr  0, ASCTy 63, PS 1, subChID   18, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 7( 8): A( 7) TMid 0, SID 00005282, componentNr  0, ASCTy 63, PS 1, subChID   17, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 8( 9): A( 8) TMid 0, SID 00005245, componentNr  0, ASCTy 63, PS 1, subChID    7, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
 9(10): A( 9) TMid 0, SID 000052CC, componentNr  0, ASCTy 63, PS 1, subChID   13, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
10(11): A(10) TMid 0, SID 00005286, componentNr  0, ASCTy 63, PS 1, subChID   11, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
11(12): A(11) TMid 0, SID 00005210, componentNr  0, ASCTy 63, PS 1, subChID    2, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
12(13): A(12) TMid 0, SID 00005284, componentNr  0, ASCTy 63, PS 1, subChID   19, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
13(14): A(13) TMid 0, SID 00005264, componentNr  0, ASCTy 63, PS 1, subChID    8, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
14(15): A(14) TMid 0, SID 00005215, componentNr  0, ASCTy 63, PS 1, subChID    4, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
15(16): A(15) TMid 0, SID 00005214, componentNr  0, ASCTy 63, PS 1, subChID    3, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
16(17): A(16) TMid 0, SID 00005281, componentNr  0, ASCTy 63, PS 1, subChID   14, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
17(18): A(17) TMid 0, SID 00005285, componentNr  0, ASCTy 63, PS 1, subChID   15, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
18(19): A(18) TMid 0, SID 00005219, componentNr  0, ASCTy 63, PS 1, subChID    5, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
19(20): A(19) TMid 0, SID 0000410E, componentNr  0, ASCTy 63, PS 1, subChID    9, SCId -1, CA 255, appType  2, SCIds 0, madePub 0, '' / ''
subChannels:
 1( 1): subChID    1, startAddr   0, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
 2( 2): subChID    2, startAddr  36, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
 3( 3): subChID    3, startAddr  72, len  48, sz  48, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  64, lang 21, FEC -1
 4( 4): subChID    4, startAddr 120, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
 5( 5): subChID    5, startAddr 156, len  48, sz  48, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  64, lang 21, FEC -1
 6( 6): subChID    6, startAddr 204, len  48, sz  48, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  64, lang 21, FEC -1
 7( 7): subChID    7, startAddr 252, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
 8( 8): subChID    8, startAddr 288, len  48, sz  48, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  64, lang 21, FEC -1
 9( 9): subChID    9, startAddr 336, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
10(10): subChID   10, startAddr 372, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
11(11): subChID   11, startAddr 408, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
12(12): subChID   12, startAddr 444, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
13(13): subChID   13, startAddr 480, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 1, FEC -1
14(14): subChID   14, startAddr 516, len  24, sz  24, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  32, lang 21, FEC -1
15(15): subChID   15, startAddr 540, len  24, sz  24, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  32, lang 21, FEC -1
16(16): subChID   16, startAddr 564, len  24, sz  24, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  32, lang 21, FEC -1
17(17): subChID   17, startAddr 588, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
18(18): subChID   18, startAddr 624, len  24, sz  24, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  32, lang 21, FEC -1
19(19): subChID   19, startAddr 648, len  36, sz  36, long, idxOrCase 102, tabIdx -1, protLevel 2, bitRate  48, lang 21, FEC -1
25(20): subChID   25, startAddr 684, len  48, sz  48, long, idxOrCase 101, tabIdx -1, protLevel 1, bitRate  48, lang -1, FEC -1
```

Note: it's still work in progress regarding improvements.

## Todo-List:

### fixed bugs

- [x] ECC and Country code (thanks to Jan van Katwijk for the bugfix)

### open bugs

- [ ] language value is `-1`.

-------------------------------------------------------------------------
Copyrights
-------------------------------------------------------------------------
	
	Copyright (C)  2016, 2017
	Jan van Katwijk (J.vanKatwijk@gmail.com)
	Lazy Chair Programming

The dab-library software is made available under the GPL-2.0. The dab-library uses a number of GPL-ed libraries, all
rigfhts gratefully acknowledged.
All SDR-J software, among which dab-library is one - is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 	GNU General Public License for more details.

