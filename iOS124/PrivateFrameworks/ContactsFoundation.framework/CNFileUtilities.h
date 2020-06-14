//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNFileServices;

@interface CNFileUtilities : NSObject
{
    id <CNFileServices> _services;
}

+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedInstance;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockUrlWithName:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (_Bool)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (void)dealloc;
- (id)initWithFileServices:(id)arg1;
- (id)init;

@end

