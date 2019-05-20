type = "controller";
bind_socket = "*:11334";

{% if PASSWORD is not defined %}
password = "mailu";
{% elif PASSWORD != "" %}
password = "{{ PASSWORD }}";
{% endif %}

{% if SECURE_IP is defined %}
{% if SECURE_IP != "" %}
secure_ip = "{{ SECURE_IP }}"
{% endif %}
{% else %}
secure_ip = "{{ POD_ADDRESS_RANGE or SUBNET }}";
{% endif %}


