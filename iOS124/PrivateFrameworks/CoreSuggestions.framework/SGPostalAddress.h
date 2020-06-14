//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject
{
    NSString *_cachedAddress;
    struct _opaque_pthread_mutex_t _cachedAddressLock;
    NSString *_rawAddress;
    SGPostalAddressComponents *_components;
}

+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6;
+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SGPostalAddressComponents *components; // @synthesize components=_components;
@property(readonly, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToPostalAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *address;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5;

@end

