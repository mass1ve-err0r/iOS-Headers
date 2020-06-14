//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKLockupElement, IKTextElement, NSArray, UIColor;

@interface IKDocumentBannerElement : IKViewElement
{
    _Bool _fixed;
}

@property(readonly, nonatomic, getter=isFixed) _Bool fixed; // @synthesize fixed=_fixed;
@property(readonly, retain, nonatomic) IKLockupElement *lockup;
@property(readonly, retain, nonatomic) NSArray *buttons;
- (_Bool)fixed;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, retain, nonatomic) IKBackgroundElement *background;
@property(readonly, retain, nonatomic) IKTextElement *subtitle;
@property(readonly, retain, nonatomic) IKTextElement *title;

@end

