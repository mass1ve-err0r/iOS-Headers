//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKInlineInkPickerDelegate-Protocol.h>

@class NSString, _PKFloatingInkPickerViewController;
@protocol PKToolPickerDelegate;

@interface PKToolPicker : NSObject <PKInlineInkPickerDelegate>
{
    id <PKToolPickerDelegate> _delegate;
    _PKFloatingInkPickerViewController *_inkPickerViewController;
}

+ (id)sharedToolPicker;
@property(retain, nonatomic) _PKFloatingInkPickerViewController *inkPickerViewController; // @synthesize inkPickerViewController=_inkPickerViewController;
@property(nonatomic) __weak id <PKToolPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (void)_makeVisisbleInScreenshotsWithView:(id)arg1;
- (void)_updateViewControllerWithWindow:(id)arg1;
- (void)handleRedo:(id)arg1;
- (void)handleUndo:(id)arg1;
@property(nonatomic) _Bool hidden;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

