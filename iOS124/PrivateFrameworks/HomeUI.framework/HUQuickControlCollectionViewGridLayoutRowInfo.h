//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HUQuickControlCollectionViewGridLayoutRowInfo : NSObject
{
    unsigned long long _numberOfItems;
    NSArray *_itemLayouts;
    struct CGSize _contentSize;
    struct CGPoint _rowOrigin;
}

@property(copy, nonatomic) NSArray *itemLayouts; // @synthesize itemLayouts=_itemLayouts;
@property(nonatomic) struct CGPoint rowOrigin; // @synthesize rowOrigin=_rowOrigin;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (void).cxx_destruct;

@end

