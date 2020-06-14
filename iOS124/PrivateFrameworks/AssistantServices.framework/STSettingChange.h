//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STSettingChange : STSiriModelObject
{
    long long _settingType;
    id _valueBeforeUpdate;
    id _valueAfterUpdate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)valueAfterUpdate;
- (id)valueBeforeUpdate;
- (long long)settingType;
- (id)initWithSettingType:(long long)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3;

@end

