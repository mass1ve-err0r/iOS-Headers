//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject
{
    NSMutableSet *_bundles;
}

+ (Class)bundleClass;
+ (id)bundleDirectoryPath;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *bundles;
- (void)registerBundle:(id)arg1;
- (void)loadBundles;
- (id)init;

@end

