//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKInlineColorPicker, UIBarButtonItem;

@protocol PKInlineColorPickerContentsHiddenDelegate <NSObject>

@optional
- (_Bool)_colorPickerIsInkPickerContentsHidden:(PKInlineColorPicker *)arg1;
- (struct CGRect)_colorPickerRectForContentsHiddenColorPickerPresentation:(PKInlineColorPicker *)arg1;
- (UIBarButtonItem *)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(PKInlineColorPicker *)arg1;
@end

