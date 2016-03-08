#ifndef PROXYSQL_ALERTROUTER_H
#define PROXYSQL_ALERTROUTER_H

// Acts as a gateway between ProxySQL core and integrations with alerting services.
// All alerts that need to be pushed to an external service should pass through it.
// It detects which integrations are enabled and passes the alert to all active
// integrations.
class AlertRouter {
public:
    void createAlert(const char *message);
};

#endif //PROXYSQL_ALERTROUTER_H
