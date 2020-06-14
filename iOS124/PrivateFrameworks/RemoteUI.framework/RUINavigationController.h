//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface RUINavigationController : UINavigationController
{
    unsigned long long _ruiSupportedInterfaceOrientations;
    CDUnknownBlockType _menuDismissalHandler;
}

@property(copy, nonatomic) CDUnknownBlockType menuDismissalHandler; // @synthesize menuDismissalHandler=_menuDismissalHandler;
- (void).cxx_destruct;
- (_Bool)canBeShownFromSuspendedState;
- (void)_menuButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;

@end

