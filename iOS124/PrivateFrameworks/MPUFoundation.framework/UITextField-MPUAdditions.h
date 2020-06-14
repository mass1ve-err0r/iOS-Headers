//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <MPUFoundation/MPUAutoupdatingTextContainer-Protocol.h>

@class MPUTextContainerContentSizeUpdater, NSAttributedString, NSString, UIFont;

@interface UITextField (MPUAdditions) <MPUAutoupdatingTextContainer>
@property(nonatomic, setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) _Bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(readonly, nonatomic) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

