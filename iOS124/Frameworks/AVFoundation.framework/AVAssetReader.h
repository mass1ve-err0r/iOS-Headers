//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReaderInternal, NSArray, NSError;

@interface AVAssetReader : NSObject
{
    AVAssetReaderInternal *_priv;
}

+ (id)_errorForOSStatus:(int)arg1;
+ (id)assetReaderWithAsset:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(readonly, nonatomic, getter=_figAssetReader) struct OpaqueFigAssetReader *figAssetReader;
- (void)cancelReading;
- (_Bool)startReading;
- (void)_outputDidFinish:(id)arg1;
- (void)addOutput:(id)arg1;
- (_Bool)canAddOutput:(id)arg1;
- (_Bool)_canAddOutput:(id)arg1 exceptionReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
@property(nonatomic, getter=_readSingleSample, setter=_setReadSingleSample:) _Bool readSingleSample;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (void)_failWithError:(id)arg1;
@property(readonly) NSError *error;
- (void)_transitionToStatus:(long long)arg1 failureError:(id)arg2;
@property(readonly) long long status;
@property(readonly, retain, nonatomic) AVAsset *asset;
- (id)description;
- (void)_tearDownFigAssetReader;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 error:(id *)arg2;
- (id)init;

@end

