//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlCollectionViewGridLayoutInfo, HUQuickControlCollectionViewSupplementaryLayoutInfo;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject
{
    HUQuickControlCollectionViewGridLayoutInfo *_gridLayout;
    HUQuickControlCollectionViewSupplementaryLayoutInfo *_supplementaryLayout;
    struct CGSize _collectionViewContentSize;
    struct CGRect _availableContentFrame;
    struct CGRect _preferredLayoutFrame;
}

@property(retain, nonatomic) HUQuickControlCollectionViewSupplementaryLayoutInfo *supplementaryLayout; // @synthesize supplementaryLayout=_supplementaryLayout;
@property(retain, nonatomic) HUQuickControlCollectionViewGridLayoutInfo *gridLayout; // @synthesize gridLayout=_gridLayout;
@property(nonatomic) struct CGSize collectionViewContentSize; // @synthesize collectionViewContentSize=_collectionViewContentSize;
@property(nonatomic) struct CGRect preferredLayoutFrame; // @synthesize preferredLayoutFrame=_preferredLayoutFrame;
@property(nonatomic) struct CGRect availableContentFrame; // @synthesize availableContentFrame=_availableContentFrame;
- (void).cxx_destruct;

@end

