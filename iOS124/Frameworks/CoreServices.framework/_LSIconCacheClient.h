//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSIconCache.h>

__attribute__((visibility("hidden")))
@interface _LSIconCacheClient : _LSIconCache
{
    unsigned long long _sandboxExtensionHandle;
}

+ (id)sharedInstance;
@property unsigned long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (id)getAlternateIconNameForIdentifier:(id)arg1;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1 clearAlternateName:(_Bool)arg2 validationDictionary:(id)arg3;
- (id)iconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheKey:(id)arg6 variant:(int)arg7 options:(int)arg8;
- (void)_fetchCacheURLAndSalt;
- (id)connection;
- (id)init;

@end

