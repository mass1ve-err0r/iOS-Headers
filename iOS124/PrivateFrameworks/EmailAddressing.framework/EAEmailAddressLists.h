//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAEmailAddressLists : NSObject
{
}

+ (id)addressDisplayStringWithMaxNumberOfAddresses:(unsigned long long)arg1 fromAddressList:(id)arg2;
+ (id)displayNameFromAddressList:(id)arg1;
+ (id)rawAddressListFromFullAddressList:(id)arg1;
+ (id)addressStringFromAddressList:(id)arg1;
+ (id)addressListFromAddressString:(id)arg1;
+ (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1 forString:(id)arg2;
+ (id)componentsSeparatedByCommaRespectingQuotesAndParensForString:(id)arg1;
+ (id)addressListFromHeaderValue:(id)arg1;

@end

