//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASBulletinStore : NSObject
{
    NSArray *_bulletins;
}

@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
- (void).cxx_destruct;
- (void)_persistBulletins;
- (void)removeBulletinsMatchingCriteria:(CDUnknownBlockType)arg1;
- (void)removeAllBulletins;
- (void)addBulletins:(id)arg1;
- (id)init;

@end

