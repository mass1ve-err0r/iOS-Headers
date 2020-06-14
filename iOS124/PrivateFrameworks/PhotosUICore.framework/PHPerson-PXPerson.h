//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPerson.h>

#import <PhotosUICore/PXPerson-Protocol.h>

@class NSDate, NSString;

@interface PHPerson (PXPerson) <PXPerson>
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) _Bool isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *name;
@property(readonly) NSString *px_displayName;
@property(readonly) Class superclass;
@end

