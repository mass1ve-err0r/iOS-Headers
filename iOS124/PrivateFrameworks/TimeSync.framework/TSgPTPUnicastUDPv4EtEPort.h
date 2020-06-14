//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
- (void)dealloc;
- (int)portType;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end

