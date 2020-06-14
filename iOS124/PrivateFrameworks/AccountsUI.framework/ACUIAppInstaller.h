//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACUIAppDescription, NSDate, NSURL;
@protocol ACUIAppInstallerDelegate;

@interface ACUIAppInstaller : NSObject
{
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    _Bool _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    _Bool _resultOfLastInstallationCheck;
    _Bool _needsAvailableInStoreCheck;
    _Bool _availableInStoreResult;
    NSURL *_publisherURL;
    id <ACUIAppInstallerDelegate> _delegate;
}

+ (id)currentStoreFront;
@property(nonatomic) __weak id <ACUIAppInstallerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *publisherURL; // @synthesize publisherURL=_publisherURL;
- (void).cxx_destruct;
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isAvailableInStore;
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;
- (void)_setAvailableInStoreResult:(_Bool)arg1;
- (void)start;
- (void)fetchDownloadability:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isDownloadable;
@property(readonly, nonatomic) _Bool requiresReachabilityCheckToDetermineDownloadability;
- (void)_performReachabilityCheck:(CDUnknownBlockType)arg1;
- (_Bool)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(_Bool)arg1;
- (_Bool)_isGreenTeaAvailable;
- (void)_setCachedReachabilityResult:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isInstalled;
- (id)initForAppWithDescription:(id)arg1;

@end

