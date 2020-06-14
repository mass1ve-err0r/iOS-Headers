//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSession.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>
{
}

+ (id)shortDescription;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLibraryManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

