//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField
{
    _Bool _isSigned;
    double _value;
}

@property(nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)valueAsData;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;

@end

