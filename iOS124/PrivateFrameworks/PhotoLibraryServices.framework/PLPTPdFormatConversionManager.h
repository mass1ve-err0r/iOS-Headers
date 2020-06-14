//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPTPConversionSupport-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport>
{
    PFMediaCapabilities *_legacyCapabilities;
    _Bool _initialized;
    PFMediaCapabilities *_peerMediaCapabilities;
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    NSURL *_temporaryDirectoryURL;
    NSMutableDictionary *_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
}

@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers; // @synthesize convertedLivePhotoPairingIdentifiersByOriginalIdentifiers=_convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property(retain) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;
@property(retain) PHMediaFormatConversionManager *mediaFormatConversionManager; // @synthesize mediaFormatConversionManager=_mediaFormatConversionManager;
@property(retain) PFMediaCapabilities *peerMediaCapabilities; // @synthesize peerMediaCapabilities=_peerMediaCapabilities;
- (void).cxx_destruct;
- (id)effectivePeerMediaCapabilites;
- (id)conversionResultForAsset:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;
@property(readonly, nonatomic) _Bool supportsTranscodeChoice;
- (void)invalidate;
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg1;
- (id)sourceForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;
- (id)requestForPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3;
- (id)requestForRenderImagePath:(id)arg1 imageDimensions:(struct CGSize)arg2 outputFilename:(id)arg3;
- (id)requestForOriginalAtPath:(id)arg1 isVideo:(_Bool)arg2 imageDimensions:(struct CGSize)arg3 originalPairingIdentifier:(id)arg4;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (_Bool)setupTemporaryDirectory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

