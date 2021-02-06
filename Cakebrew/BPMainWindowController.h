//
//  BPMainWindowController.h
//  Cakebrew
//
//  Created by Bruno on 06.02.21.
//  Copyright © 2021 Bruno Philipe. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface BPMainWindowController : NSWindowController

@property (readonly, strong) NSSplitViewController *splitViewController;

- (void)setUpViews;

@end

NS_ASSUME_NONNULL_END
