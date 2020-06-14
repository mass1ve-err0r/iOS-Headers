//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <HealthUI/UITextViewDelegate-Protocol.h>

@class NSString, UITextView;

@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate>
{
    UITextView *_footerTextView;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupConstraints;
- (void)_setUpFooterTextViewWithBodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3;
- (id)initWithReuseIdentifier:(id)arg1 bodyText:(id)arg2 linkText:(id)arg3 link:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

