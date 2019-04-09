//
//  RNSafeArea.h
//  RNSafeArea
//
//  Created by Masayuki Iwai on 2017/09/13.
//  Copyright © 2017 Masayuki Iwai. All rights reserved.
//

#import "RCTEventEmitter.h"
#import "RCTBridgeModule.h"
#import "RCTBridge.h"
#import "RCTUtils.h"

#define RNSafeAreaInsetsForRootViewDidChangeNotification @"RNSafeAreaInsetsForRootViewDidChangeNotification"

@interface RNSafeArea : RCTEventEmitter<RCTBridgeModule>

@end
