//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDataBindingPropertyPath, NSString;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalityOperation : NSObject
{
    unsigned long long _type;
    IKDataBindingPropertyPath *_propertyPath;
    NSString *_literal;
}

@property(copy, nonatomic) NSString *literal; // @synthesize literal=_literal;
@property(retain, nonatomic) IKDataBindingPropertyPath *propertyPath; // @synthesize propertyPath=_propertyPath;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)passesForDataItem:(id)arg1;

@end

