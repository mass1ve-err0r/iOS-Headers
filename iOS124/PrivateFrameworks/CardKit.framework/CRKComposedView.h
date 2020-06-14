//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CardKit/CRKComposableView-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView <CRKComposableView>
{
    NSMutableArray *_mutableCardSectionSubviews;
    NSArray *_cardSectionSubviews;
}

@property(retain, nonatomic) NSArray *cardSectionSubviews; // @synthesize cardSectionSubviews=_cardSectionSubviews;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets cardSectionContentMargins;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

