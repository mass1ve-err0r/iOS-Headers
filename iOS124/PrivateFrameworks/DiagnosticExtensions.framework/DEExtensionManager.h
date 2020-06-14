//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface DEExtensionManager : NSObject
{
    _Bool _extendedLoaded;
    NSObject<OS_dispatch_queue> *_initialLoadQueue;
    NSArray *_extensions;
    CDUnknownBlockType _afterExtendedBlock;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool extendedLoaded; // @synthesize extendedLoaded=_extendedLoaded;
@property(copy, nonatomic) CDUnknownBlockType afterExtendedBlock; // @synthesize afterExtendedBlock=_afterExtendedBlock;
@property(retain, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue; // @synthesize initialLoadQueue=_initialLoadQueue;
- (void).cxx_destruct;
- (id)extensionsWithFilter:(id)arg1;
- (void)loadExtensions;
- (id)init;
- (id)extensionForIdentifier:(id)arg1;

@end

