//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPrintPageRenderer.h>

#import <WebUI/UIPrintInteractionControllerDelegate-Protocol.h>

@class NSNumberFormatter, NSString, UIColor, UIFont, UIPrintFormatter;
@protocol WBUPrintPageRendererDelegate;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate>
{
    NSNumberFormatter *_numberFormatter;
    double _URLWidth;
    NSString *_dateString;
    double _dateWidth;
    double _printWidth;
    struct CGPoint _contentOffset;
    struct CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
    _Bool _printFooter;
    NSString *_URLString;
    UIPrintFormatter *_contentFormatter;
    id <WBUPrintPageRendererDelegate> _delegate;
}

@property(nonatomic) __weak id <WBUPrintPageRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool printFooter; // @synthesize printFooter=_printFooter;
@property(retain, nonatomic) UIPrintFormatter *contentFormatter; // @synthesize contentFormatter=_contentFormatter;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

