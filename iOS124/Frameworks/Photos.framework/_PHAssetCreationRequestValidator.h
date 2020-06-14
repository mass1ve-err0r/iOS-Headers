//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHValidator.h>

@class NSString, PHAssetCreationRequest;

@interface _PHAssetCreationRequestValidator : PHValidator
{
    PHAssetCreationRequest *_assetCreationRequest;
    NSString *_validatedPairingIdentifier;
    CDStruct_1b6d18a9 _validatedVideoDuration;
    CDStruct_1b6d18a9 _validatedImageDisplayTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 validatedImageDisplayTime; // @synthesize validatedImageDisplayTime=_validatedImageDisplayTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 validatedVideoDuration; // @synthesize validatedVideoDuration=_validatedVideoDuration;
@property(readonly, nonatomic) NSString *validatedPairingIdentifier; // @synthesize validatedPairingIdentifier=_validatedPairingIdentifier;
@property(readonly, nonatomic) __weak PHAssetCreationRequest *assetCreationRequest; // @synthesize assetCreationRequest=_assetCreationRequest;
- (void).cxx_destruct;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2 videoDuration:(CDStruct_1b6d18a9 *)arg3 imageDisplayTime:(CDStruct_1b6d18a9 *)arg4;
- (id)initWithAssetCreationRequest:(id)arg1;

@end

