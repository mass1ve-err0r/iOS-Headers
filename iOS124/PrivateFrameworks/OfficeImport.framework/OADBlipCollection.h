//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject
{
    NSMutableArray *mBlips;
}

@property(retain, nonatomic) NSMutableArray *blips; // @synthesize blips=mBlips;
- (unsigned int)blipCount;
- (unsigned int)addBlip:(id)arg1;
- (id)blipAtIndex:(int)arg1;
- (void)dealloc;
- (id)init;

@end

