//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface ICStoreDialogResponse : NSObject <NSCopying>
{
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_buttonActionKeyForType:(long long)arg1;
- (id)_buttonTitleKeyForType:(long long)arg1;
- (id)_buttonWithType:(long long)arg1;
@property(readonly, nonatomic) long long defaultButtonType;
@property(readonly, copy, nonatomic) NSArray *buttons;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed;
@property(readonly, nonatomic, getter=isInitialCheckboxValue) _Bool initialCheckboxValue;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic) long long type;
- (id)debugDescription;
- (id)initWithResponseDictionary:(id)arg1;

@end

