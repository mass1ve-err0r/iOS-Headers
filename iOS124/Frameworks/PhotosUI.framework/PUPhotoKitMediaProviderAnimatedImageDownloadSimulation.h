//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSDictionary, PHAnimatedImage;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderAnimatedImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation
{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    PHAnimatedImage *__resultAnimatedImage;
    NSDictionary *__resultInfo;
}

@property(copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // @synthesize _resultInfo=__resultInfo;
@property(retain, nonatomic, setter=_setResultAnimatedImage:) PHAnimatedImage *_resultAnimatedImage; // @synthesize _resultAnimatedImage=__resultAnimatedImage;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalResultHandler; // @synthesize internalResultHandler=_internalResultHandler;
@property(copy, nonatomic) CDUnknownBlockType externalResultHandler; // @synthesize externalResultHandler=_externalResultHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalProgressHandler; // @synthesize internalProgressHandler=_internalProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType externalProgressHandler; // @synthesize externalProgressHandler=_externalProgressHandler;
- (void).cxx_destruct;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_handleResultAnimatedImage:(id)arg1 info:(id)arg2;
- (id)init;

@end

