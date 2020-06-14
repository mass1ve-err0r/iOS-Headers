//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class NSString, PSCloudStorageOffersManager;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate>
{
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PSCloudStorageOffersManager *cloudStorageOffersManager; // @synthesize cloudStorageOffersManager=_cloudStorageOffersManager;
- (void).cxx_destruct;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

