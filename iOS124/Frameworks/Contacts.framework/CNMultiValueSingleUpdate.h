//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

__attribute__((visibility("hidden")))
@interface CNMultiValueSingleUpdate : CNMultiValueUpdate
{
    CNLabeledValue *_value;
}

@property(readonly, nonatomic) CNLabeledValue *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1;

@end

