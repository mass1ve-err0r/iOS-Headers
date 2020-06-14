//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SGContactPipelineHelper : NSObject
{
    NSMutableDictionary *_lengthsCounts;
    unsigned long long _phonesSeenInContacts;
    NSString *_mostCommonCountryCode;
    struct _opaque_pthread_mutex_t _helperLock;
}

+ (id)normalizedDigits:(id)arg1;
+ (id)dialingCodeForPhone:(id)arg1;
+ (id)findContactInArray:(id)arg1 withDetailType:(unsigned long long)arg2 andValue:(id)arg3;
+ (_Bool)contactExistsInArray:(id)arg1 withName:(id)arg2;
+ (id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2;
+ (id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2;
+ (id)contactStore;
- (void).cxx_destruct;
- (_Bool)numberMatchesContactsForm:(id)arg1;
- (void)dealloc;
- (id)init;

@end

