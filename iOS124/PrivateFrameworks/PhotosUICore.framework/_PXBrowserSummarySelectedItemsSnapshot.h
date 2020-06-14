//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSelectedItemsSnapshot-Protocol.h>

@protocol PXBrowserSelectionSnapshot;

@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot>
{
    id <PXBrowserSelectionSnapshot> _browserSelectionSnapshot;
}

@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> browserSelectionSnapshot; // @synthesize browserSelectionSnapshot=_browserSelectionSnapshot;
- (void).cxx_destruct;
- (id)itemForItemReference:(id)arg1;
- (id)containsItemReference:(id)arg1;
- (id)itemReferenceAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithBrowserSelectionSnapshot:(id)arg1;
- (id)init;

@end

