//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement
{
    _Bool _ascending;
    NSString *_property;
}

+ (_Bool)shouldParseChildDOMElements;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic, getter=isAscending) _Bool ascending; // @synthesize ascending=_ascending;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

