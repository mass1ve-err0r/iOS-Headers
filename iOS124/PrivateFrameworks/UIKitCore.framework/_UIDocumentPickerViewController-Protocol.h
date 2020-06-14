//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIColor, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewController <NSObject>
- (void)_setSourceIsManaged:(_Bool)arg1;
- (void)_setTintColor:(UIColor *)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareForDisplayWithCompletion:(void (^)(struct CGSize))arg1;
- (void)_showDefaultPicker;
- (void)_setAuxiliaryOptions:(NSArray *)arg1;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
@end

