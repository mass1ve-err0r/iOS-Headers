//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation
{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    NSData *__resultImageData;
    NSString *__resultDataUTI;
    long long __resultOrientaton;
    NSDictionary *__resultInfo;
}

@property(copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // @synthesize _resultInfo=__resultInfo;
@property(nonatomic, setter=_setResultOrientation:) long long _resultOrientaton; // @synthesize _resultOrientaton=__resultOrientaton;
@property(retain, nonatomic, setter=_setResultDataUTI:) NSString *_resultDataUTI; // @synthesize _resultDataUTI=__resultDataUTI;
@property(retain, nonatomic, setter=_setResultImageData:) NSData *_resultImageData; // @synthesize _resultImageData=__resultImageData;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalResultHandler; // @synthesize internalResultHandler=_internalResultHandler;
@property(copy, nonatomic) CDUnknownBlockType externalResultHandler; // @synthesize externalResultHandler=_externalResultHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalProgressHandler; // @synthesize internalProgressHandler=_internalProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType externalProgressHandler; // @synthesize externalProgressHandler=_externalProgressHandler;
- (void).cxx_destruct;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_handleResultImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4;
- (id)init;

@end

