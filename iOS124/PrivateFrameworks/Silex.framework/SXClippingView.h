//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SXClippingLayer;

@interface SXClippingView : UIView
{
    UIView *_contentView;
    unsigned long long _clippingMode;
    struct CGSize _contentSize;
    struct CGRect _contentFrame;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void).cxx_destruct;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SXClippingLayer *layer; // @dynamic layer;

@end

