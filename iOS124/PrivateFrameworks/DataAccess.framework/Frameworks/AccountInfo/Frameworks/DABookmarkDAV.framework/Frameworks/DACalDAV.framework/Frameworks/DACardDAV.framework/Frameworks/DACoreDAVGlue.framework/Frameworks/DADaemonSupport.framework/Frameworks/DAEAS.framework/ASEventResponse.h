//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASEvent.h>

@interface ASEventResponse : ASEvent
{
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end

