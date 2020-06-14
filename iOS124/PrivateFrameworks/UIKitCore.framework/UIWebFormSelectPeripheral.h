//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFormPeripheral-Protocol.h>

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLSelectElement *_selectionNode;
    id <UIWebFormControl> _selectControl;
}

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;
@property(retain, nonatomic) id <UIWebFormControl> _selectControl; // @synthesize _selectControl;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)endEditing;
- (void)beginEditing;
- (id)assistantView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1;

@end

