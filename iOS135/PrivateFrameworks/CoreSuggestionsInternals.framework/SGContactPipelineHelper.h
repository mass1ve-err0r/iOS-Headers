/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactPipelineHelper : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _helperLock;
    NSMutableDictionary * _lengthsCounts;
    NSString * _mostCommonCountryCode;
    unsigned long long  _phonesSeenInContacts;
}

+ (bool)contactExistsInArray:(id)arg1 withName:(id)arg2 andHandle:(id)arg3;
+ (id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2;
+ (id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2;
+ (id)normalizedDigits:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)numberMatchesContactsForm:(id)arg1;
- (bool)numberMatchesContactsForm:(id)arg1 usingPredicate:(id)arg2;

@end