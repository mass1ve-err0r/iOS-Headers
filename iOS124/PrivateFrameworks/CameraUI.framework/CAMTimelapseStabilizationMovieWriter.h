//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/AVOfflineVideoStabilizerDataProvider-Protocol.h>
#import <CameraUI/CAMTimelapseMovieWriterProtocol-Protocol.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVOfflineVideoStabilizer, CLLocation, NSArray, NSDate, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol>
{
    _Bool _suspended;
    _Bool __preferHEVC;
    NSArray *__frameFilePaths;
    NSArray *__visMetadataFilePaths;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__readingQueue;
    NSObject<OS_dispatch_queue> *__decodeQueue;
    NSObject<OS_dispatch_semaphore> *__semFrameGetter;
    NSObject<OS_dispatch_semaphore> *__semFileReader;
    struct __CFArray *__frameList;
    NSDate *__movieCreationDate;
    CLLocation *__movieCreationLocation;
    NSString *__movieOutputPath;
    long long __movieFramesPerSecond;
    AVOfflineVideoStabilizer *__stabilizer;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    long long __frameCountWrittenToMovie;
    long long __nextSourceFrameIndex;
    long long __nextMetadataFrameIndex;
    long long __firstFrameIndex;
    struct __CVBuffer *__stashedSourceFrame;
    NSMutableSet *__badFrameSet;
    NSMutableSet *__badMetadataSet;
    long long __badMetadataErrorThreshold;
    unsigned long long __frameLoadMode;
    CDUnknownBlockType __completion;
    void *__powerAssertion;
    struct CGAffineTransform __movieTransform;
}

+ (struct CGSize)_desiredOutputSizeForSourcePixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly, nonatomic) void *_powerAssertion; // @synthesize _powerAssertion=__powerAssertion;
@property(readonly, copy, nonatomic) CDUnknownBlockType _completion; // @synthesize _completion=__completion;
@property(readonly, nonatomic) unsigned long long _frameLoadMode; // @synthesize _frameLoadMode=__frameLoadMode;
@property(readonly, nonatomic) long long _badMetadataErrorThreshold; // @synthesize _badMetadataErrorThreshold=__badMetadataErrorThreshold;
@property(readonly, nonatomic) NSMutableSet *_badMetadataSet; // @synthesize _badMetadataSet=__badMetadataSet;
@property(readonly, nonatomic) NSMutableSet *_badFrameSet; // @synthesize _badFrameSet=__badFrameSet;
@property(readonly, nonatomic) struct __CVBuffer *_stashedSourceFrame; // @synthesize _stashedSourceFrame=__stashedSourceFrame;
@property(readonly, nonatomic) long long _firstFrameIndex; // @synthesize _firstFrameIndex=__firstFrameIndex;
@property(readonly, nonatomic) long long _nextMetadataFrameIndex; // @synthesize _nextMetadataFrameIndex=__nextMetadataFrameIndex;
@property(readonly, nonatomic) long long _nextSourceFrameIndex; // @synthesize _nextSourceFrameIndex=__nextSourceFrameIndex;
@property(readonly, nonatomic) long long _frameCountWrittenToMovie; // @synthesize _frameCountWrittenToMovie=__frameCountWrittenToMovie;
@property(readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // @synthesize _pixelBufferAdaptor=__pixelBufferAdaptor;
@property(readonly, nonatomic) AVAssetWriterInput *_videoInput; // @synthesize _videoInput=__videoInput;
@property(readonly, nonatomic) AVAssetWriter *_writer; // @synthesize _writer=__writer;
@property(readonly, nonatomic) AVOfflineVideoStabilizer *_stabilizer; // @synthesize _stabilizer=__stabilizer;
@property(readonly, nonatomic) _Bool _preferHEVC; // @synthesize _preferHEVC=__preferHEVC;
@property(readonly, nonatomic) long long _movieFramesPerSecond; // @synthesize _movieFramesPerSecond=__movieFramesPerSecond;
@property(readonly, nonatomic) struct CGAffineTransform _movieTransform; // @synthesize _movieTransform=__movieTransform;
@property(readonly, nonatomic) NSString *_movieOutputPath; // @synthesize _movieOutputPath=__movieOutputPath;
@property(readonly, nonatomic) CLLocation *_movieCreationLocation; // @synthesize _movieCreationLocation=__movieCreationLocation;
@property(readonly, nonatomic) NSDate *_movieCreationDate; // @synthesize _movieCreationDate=__movieCreationDate;
@property(readonly, nonatomic) struct __CFArray *_frameList; // @synthesize _frameList=__frameList;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFileReader; // @synthesize _semFileReader=__semFileReader;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFrameGetter; // @synthesize _semFrameGetter=__semFrameGetter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_decodeQueue; // @synthesize _decodeQueue=__decodeQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_readingQueue; // @synthesize _readingQueue=__readingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // @synthesize _movieWritingQueue=__movieWritingQueue;
@property(readonly, nonatomic) NSArray *_visMetadataFilePaths; // @synthesize _visMetadataFilePaths=__visMetadataFilePaths;
@property(readonly, nonatomic) NSArray *_frameFilePaths; // @synthesize _frameFilePaths=__frameFilePaths;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(id)arg3;
- (struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(id)arg3;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishMovieWithFailure;
- (void)_finishMovieWithRestartUnstabilized;
- (_Bool)_appendPixelBufferToMovie:(struct __CVBuffer *)arg1;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (int)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(_Bool)arg8 visMetadataCount:(long long)arg9 videoMetadata:(id)arg10;
- (int)_copySourcePixelBufferForNextFrame:(struct __CVBuffer **)arg1 skipBadFrames:(_Bool)arg2;
- (void)_requestNextFrameReadDecode;
- (int)_copyNextSampleBufferFromStabilizer:(struct opaqueCMSampleBuffer **)arg1;
- (void)_writeMovieAsynchronously;
- (void)_startAsyncDecoding;
- (struct __CVBuffer *)_decodeFirstFrameAgain;
- (struct __CVBuffer *)_cropPixelBufferIfNeeded:(struct __CVBuffer *)arg1;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_restartUnstabilized;
- (void)_reset;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

