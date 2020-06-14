//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol RedEyeInspector;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair2 : NSObject
{
    id <RedEyeInspector> inspector;
    CDStruct_c3faddef fullBitmap;
    CDStruct_5973fb4f subRectangle;
    float xf;
    float yf;
    float xfi;
    float yfi;
    float ify;
    int cameraType;
    int orientation;
    int computeType;
    _Bool forceFail;
    _Bool debugSyntheticPupils;
    _Bool showSpecularShine;
    int syntheticPupilChannel;
    int syntheticRepairTag;
    float syntheticPupilShade;
    float syntheticPupilSoftness;
    float syntheticPupilReach;
    float syntheticPupilSampling;
    float syntheticSpecularShineSoftness;
    float syntheticSpecularShineAlpha;
    float sharpeningEdgeExtractRadius;
    float sharpeningEdgeExtractThreshold;
    _Bool syntheticEyelidOcclusion;
    _Bool syntheticIrisInfill;
    struct CGRect inputImageExtent;
    _Bool printPupilSummary;
    _Bool printIODEtc;
    _Bool printRepairsSaved;
    _Bool printRepairsApplied;
    _Bool printFaceStatistics;
    _Bool printProminenceContainment;
    _Bool printProminenceAlternatives;
    _Bool printEyeOpenness;
    _Bool printConfidenceLog;
    int printImproveBitmaskLevel;
    _Bool printImproveBitmaskConsistencyCheck;
    int printIrisRingLevel;
    _Bool printNeededOcclusions;
    int printFaceArrayLevel;
    struct CGRect ROIRect;
    int faceIndex;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float skinval;
    NSArray *faceArray;
    CDStruct_99f3e179 FC;
    int ioffx;
    int ioffy;
    CDStruct_c3faddef faceBitmap;
    NSMutableArray *syntheticRepairs;
    CDStruct_1c6f3adb DCS;
    int erError;
    CDStruct_5973fb4f repairRect;
    CDStruct_c3faddef repairMap;
    NSMutableArray *failureCauses;
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;
+ (CDStruct_99f3e179)faceContextWithFaceArray:(id)arg1 index:(int)arg2;
+ (void)printProminenceSearchResultsWithTitle:(char *)arg1 hopperElement:(CDStruct_7a0e83b0 *)arg2 maxData:(CDStruct_32eeb3fa *)arg3 toLine:(char *)arg4 maxLength:(int)arg5;
+ (id)imageWithREDEYEFORMATBitmap:(CDStruct_c3faddef *)arg1;
+ (void)analyzeFineGrowBitmaskData:(CDStruct_32eeb3fa *)arg1 dataSize:(int)arg2 context:(CDStruct_69e56647 *)arg3;
+ (void)analyzeCoarseGrowBitmaskData:(CDStruct_32eeb3fa *)arg1 dataSize:(int)arg2 context:(CDStruct_69e56647 *)arg3;
+ (void)insertIntoProminenceVettingHopper:(CDStruct_e6988dbd *)arg1 measure:(float)arg2 max:(int)arg3 outside:(int)arg4 confidence:(float)arg5 distance:(float)arg6 area:(int)arg7 borderMax:(int)arg8 borderMin:(int)arg9 row:(int)arg10 column:(int)arg11;
+ (int)countOfAdjacentValues:(CDStruct_1ef3fb1f [4])arg1 in:(CDStruct_94ca5ecd *)arg2 ofValue:(int)arg3 atCol:(int)arg4 row:(int)arg5 radius:(int)arg6 addingTo:(int)arg7;
+ (_Bool)verifyBorderPoints:(CDStruct_94ca5ecd *)arg1 rect:(CDStruct_a734b2e2)arg2 inside:(CDStruct_f7cf7ab1 *)arg3 outside:(CDStruct_f7cf7ab1 *)arg4 error:(char [256])arg5;
+ (void)printBorder:(CDStruct_f7cf7ab1 *)arg1 name:(char *)arg2;
+ (_Bool)computeBorderPoints:(CDStruct_94ca5ecd *)arg1 rect:(CDStruct_a734b2e2)arg2 inside:(CDStruct_f7cf7ab1 *)arg3 outside:(CDStruct_f7cf7ab1 *)arg4;
+ (double)averageDifferenceBetweenInsideSummary:(CDStruct_c0454aff *)arg1 andOutsideBorderSummary:(CDStruct_c0454aff *)arg2;
+ (void)summarizeBitmap:(CDStruct_c3faddef *)arg1 withBitmask:(CDStruct_94ca5ecd *)arg2 radius:(int)arg3 rect:(CDStruct_a734b2e2)arg4 returningInsideSummary:(CDStruct_c0454aff *)arg5 outsideBorderSummary:(CDStruct_c0454aff *)arg6;
+ (int)adjacencyScoreInBitmask:(CDStruct_94ca5ecd *)arg1 atColumn:(int)arg2 row:(int)arg3 radius:(int)arg4;
+ (double)applyFalloffFunction:(int)arg1 toAlpha:(double)arg2 discFactor:(double)arg3;
+ (double)next12BitRandom;
+ (void)start12BitRandom:(int)arg1;
+ (float)radiusOfEllipseInDirection:(struct CGPoint)arg1 a:(float)arg2 b:(float)arg3 angle:(float)arg4;
+ (_Bool)LHSpoint:(struct CGPoint)arg1 isToLeftOfLineFromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
+ (double)circleRadiusAndCenter:(struct CGPoint *)arg1 withPoint1:(struct CGPoint)arg2 point2:(struct CGPoint)arg3 andPoint3:(struct CGPoint)arg4;
+ (float)intersectRayOrigin:(struct CGPoint)arg1 unitVector:(struct CGPoint)arg2 withEllipseOrigin:(struct CGPoint)arg3 a:(float)arg4 b:(float)arg5 angle:(float)arg6;
+ (CDStruct_a734b2e2)ovalBoundsWithOC:(CDStruct_7a4a8b82 *)arg1;
+ (struct CGPoint)ovalOutlinePointWithT:(float)arg1 OC:(CDStruct_7a4a8b82 *)arg2;
+ (float)bitmask:(CDStruct_94ca5ecd *)arg1 debugComments:(CDStruct_1c6f3adb *)arg2 toOval:(CDStruct_7a4a8b82 *)arg3;
+ (void)processAdjustmentData:(CDStruct_5ff5faa0 *)arg1 intoRadiusChange:(float *)arg2 andShift:(float *)arg3 whichRadius:(int)arg4 radiusValue:(float)arg5 debugComments:(CDStruct_1c6f3adb *)arg6;
+ (void)initAdjustmentData:(CDStruct_5ff5faa0 *)arg1;
+ (void)graphBitmaskGrowData:(CDStruct_32eeb3fa *)arg1 size:(int)arg2 index:(int)arg3 debugComments:(CDStruct_1c6f3adb *)arg4;
+ (void)drawBitmask:(CDStruct_94ca5ecd *)arg1 index:(int)arg2 debugComments:(CDStruct_1c6f3adb *)arg3;
+ (void)drawBitmask:(CDStruct_94ca5ecd *)arg1 withOval:(CDStruct_7a4a8b82 *)arg2 index:(int)arg3 comparison:(_Bool)arg4 salientMode:(int)arg5 debugComments:(CDStruct_1c6f3adb *)arg6;
+ (void)renameFile:(id)arg1 toFile:(id)arg2 inDirectory:(id)arg3;
+ (void)deleteAtPath:(id)arg1;
+ (id)directoryContents:(id)arg1;
+ (void)createDirectoryAtPath:(id)arg1;
+ (_Bool)directoryExistsAtPath:(id)arg1;
+ (_Bool)fileExistsAtPath:(id)arg1;
+ (id)pathWithDirectory:(id)arg1 file:(id)arg2;
- (void)executeRepair:(id)arg1;
- (int)validateRepair:(id)arg1;
- (void)printExecuteRepairError:(int)arg1;
- (id)repairArray;
- (void)transformRepairArray:(struct CGAffineTransform)arg1;
- (CDStruct_9d808415)transformGlobalRepairRecord:(CDStruct_9d808415 *)arg1 transform:(struct CGAffineTransform)arg2;
- (struct CGPoint)leftHandedTransform:(struct CGAffineTransform)arg1 ofPoint:(struct CGPoint)arg2;
- (id)packRepairDictionary:(CDStruct_9d808415 *)arg1;
- (id)packRepairDictionary:(CDStruct_9d808415 *)arg1 print:(_Bool)arg2;
- (id)packGlobalRepairDictionary:(CDStruct_9d808415 *)arg1 print:(_Bool)arg2;
- (CDStruct_9d808415)unpackRepairDictionary:(id)arg1;
- (CDStruct_9d808415)unpackGlobalRepairDictionary:(id)arg1;
- (CDStruct_94ca5ecd *)bitmaskWithDictionary:(id)arg1;
- (id)dictionaryWithBitmask:(CDStruct_94ca5ecd *)arg1 print:(_Bool)arg2;
- (id)mutableCopyOfArray:(id)arg1;
- (id)repairWithSide:(int)arg1;
- (void)autoRepairWithFaceArray:(id)arg1;
- (void)printFaceArray;
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;
- (CDStruct_a734b2e2)bitmapRectWithImageSubRectangle:(struct CGRect)arg1;
- (id)dictionaryRectArrayWithGlobalBitmapRect:(CDStruct_a734b2e2)arg1;
- (id)dictionaryRectArrayWithBitmapRect:(CDStruct_a734b2e2)arg1;
- (CDStruct_a734b2e2)globalBitmapRectWithDictionaryRectArray:(id)arg1;
- (CDStruct_a734b2e2)bitmapRectWithDictionaryRectArray:(id)arg1;
- (struct CGPoint)dictionaryPointWithGlobalBitmapPoint:(struct CGPoint)arg1;
- (struct CGPoint)dictionaryPointWithBitmapPoint:(struct CGPoint)arg1;
- (struct CGPoint)globalBitmapPointWithDictionaryPoint:(struct CGPoint)arg1;
- (struct CGPoint)bitmapPointWithDictionaryPoint:(struct CGPoint)arg1;
- (CDStruct_a734b2e2)repairRect;
- (CDStruct_c3faddef *)repairMap;
- (void)repairExternalBuffer;
- (void)updateWithFaceIndex:(int)arg1;
- (void)setUpWithOptions:(id)arg1;
- (struct CGRect)extentOption:(id)arg1 in:(id)arg2 theDefault:(struct CGRect)arg3;
- (id)stringOption:(id)arg1 in:(id)arg2 theDefault:(id)arg3;
- (float)floatOption:(id)arg1 in:(id)arg2 theDefault:(float)arg3;
- (int)intOption:(id)arg1 in:(id)arg2 theDefault:(int)arg3;
- (_Bool)boolOption:(id)arg1 in:(id)arg2 theDefault:(_Bool)arg3;
- (void)setInspector:(id)arg1;
- (id)failureCauses;
- (void)doRepairExtraction;
- (_Bool)analyzeIrisColors:(CDStruct_9d808415 *)arg1 side:(int)arg2;
- (_Bool)is2MImageWithBase:(char *)arg1;
- (_Bool)hasBeautyMarkWithBase:(char *)arg1 side:(int)arg2;
- (_Bool)needsEyelidOcclusionWithBase:(char *)arg1 side:(int)arg2 upper:(int)arg3;
- (void)extractIrisColors:(CDStruct_9d808415 *)arg1;
- (void)alignPupils;
- (float)pupilAspectWithEyeIndex:(int)arg1 andPupilCenter:(struct CGPoint)arg2;
- (float)facePoseYawAngle;
- (float)pupilFractionWithEyeIndex:(int)arg1 andPupilCenter:(struct CGPoint)arg2;
- (float)eyeOpennessWithEyeIndex:(int)arg1;
- (void)characterizePupilAndSpecularShine;
- (CDStruct_9d808415)repairWithProminence:(CDStruct_a3f7b727)arg1 white:(CDStruct_a3f7b727 *)arg2 onSide:(int)arg3 metrics:(CDStruct_265c7ca9)arg4 rect:(CDStruct_a734b2e2)arg5;
- (CDStruct_a3f7b727)winningProminence:(CDStruct_a3f7b727 [7])arg1 metrics:(CDStruct_265c7ca9)arg2;
- (void)acquireProminences:(CDStruct_a3f7b727 [7])arg1 onSide:(int)arg2 metrics:(CDStruct_265c7ca9)arg3;
- (void)freeChoiceRecord:(CDStruct_a3f7b727 *)arg1;
- (void)initChoiceRecord:(CDStruct_a3f7b727 *)arg1 type:(int)arg2 title:(char *)arg3 plusWhiteTitle:(char *)arg4 name:(char *)arg5 canPlusWhite:(_Bool)arg6 canSpecular:(_Bool)arg7 metrics:(CDStruct_265c7ca9)arg8;
- (CDStruct_818bb265)averageColorUnderBitmask:(CDStruct_94ca5ecd *)arg1 rect:(CDStruct_a734b2e2)arg2 eye:(int)arg3 HSV:(CDStruct_818bb265 *)arg4 minSE:(int *)arg5 avgSE:(int *)arg6 maxSE:(int *)arg7 satSE:(int *)arg8 satSEFraction:(float *)arg9 satSERect:(CDStruct_a734b2e2 *)arg10;
- (_Bool)gatherFaceStatistics;
- (CDStruct_94ca5ecd *)bitmaskWithSharpeningEdgeInRect:(CDStruct_a734b2e2)arg1;
- (_Bool)findProminenceWithSide:(int)arg1 record:(CDStruct_a3f7b727 *)arg2;
- (void)freeBitmaps;
- (void)allocateAndPopulateBitmaps;
- (CDStruct_94ca5ecd *)localComputeBitmaskWithChannel:(CDStruct_c3faddef *)arg1 x:(int)arg2 y:(int)arg3 options:(CDStruct_e5fcc3f9 *)arg4 eyeCase:(int)arg5 returningMaxData:(CDStruct_32eeb3fa *)arg6 isSpecularData:(_Bool *)arg7 maxSpecularData:(CDStruct_32eeb3fa *)arg8 specularBitmask:(CDStruct_183601bc **)arg9;
- (CDStruct_0b15f989)improveBitmask:(CDStruct_94ca5ecd *)arg1 radius:(int)arg2 inChannel:(CDStruct_c3faddef *)arg3 rect:(CDStruct_a734b2e2)arg4;
- (_Bool)computeFilteredArbitraryBitmapWithRepair:(id)arg1 returningBitmap:(CDStruct_c3faddef *)arg2 atImageLocation:(CDStruct_a734b2e2 *)arg3;
- (_Bool)computeFilteredOvalBitmapWithRepair:(id)arg1 returningBitmap:(CDStruct_c3faddef *)arg2 atImageLocation:(CDStruct_a734b2e2 *)arg3;
- (_Bool)computeSyntheticPupilBitmapWithRepair:(id)arg1 returningBitmap:(CDStruct_c3faddef *)arg2 atImageLocation:(CDStruct_a734b2e2 *)arg3;
- (void)printRepair:(CDStruct_9d808415)arg1;
- (char *)falloffFunctionName:(int)arg1;

@end

