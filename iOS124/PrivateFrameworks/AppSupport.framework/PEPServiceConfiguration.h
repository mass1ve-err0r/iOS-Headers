//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;
    _Bool _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;
- (_Bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(_Bool)arg2;
- (_Bool)registerNetworkDefaultsForAppID:(id)arg1;
- (void)_updateDefaults:(id)arg1;
- (void)_postNotification;
- (void)dealloc;
- (id)init;

@end

