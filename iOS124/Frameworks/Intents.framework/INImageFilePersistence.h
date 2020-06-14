//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INImageStoring-Protocol.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring>
{
    INImageBundle *_imageBundle;
    NSArray *__supportedClasses;
}

@property(copy, nonatomic, setter=_setSupportedClasses:) NSArray *_supportedClasses; // @synthesize _supportedClasses=__supportedClasses;
- (void).cxx_destruct;
- (id)_deleteItemAtFilePath:(id)arg1;
- (id)_filePathForImageWithFileName:(id)arg1;
@property(readonly, nonatomic) unsigned long long servicePriority;
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)canStoreImage:(id)arg1;
- (void)purgeExpiredImagesInEphemeralStore;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

