//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

@interface CMKShutterIndicatorView : UIView
{
    NSAttributedString *__indicatorText;
}

@property(readonly, nonatomic) NSAttributedString *_indicatorText; // @synthesize _indicatorText=__indicatorText;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKShutterIndicatorViewInitialization;

@end

