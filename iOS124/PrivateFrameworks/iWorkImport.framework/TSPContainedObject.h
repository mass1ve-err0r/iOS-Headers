//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObject;

__attribute__((visibility("hidden")))
@interface TSPContainedObject : NSObject
{
    TSPObject *_owner;
}

@property(nonatomic) __weak TSPObject *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithOwner:(id)arg1;
- (id)objectLocale;
- (id)documentRoot;

@end

