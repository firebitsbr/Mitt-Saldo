//
//  Created by Björn Sållarp
//  NO Copyright. NO rights reserved.
//
//  Use this code any way you like. If you do like it, please
//  link to my blog and/or write a friendly comment. Thank you!
//
//  Read my blog @ http://blog.sallarp.com
//  Follow me @bjornsallarp
//  Fork me @ http://github.com/bjornsallarp
//
#import <UIKit/UIKit.h>
#import "CardDetailsBaseViewController.h"

@interface TicketRikskortetDetailsViewController : CardDetailsBaseViewController<UITableViewDelegate, UITableViewDataSource>
+ (TicketRikskortetDetailsViewController *)controllerWithCard:(MSConfiguredBank *)card;
@property (nonatomic, retain) IBOutlet UITableView *detailsTableView;
@end
