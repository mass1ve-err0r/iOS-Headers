//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUControllableCollectionViewLayoutOverrideAttributes, NSIndexPath;

@protocol HUControllableCollectionViewLayout <NSObject>
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
@end

